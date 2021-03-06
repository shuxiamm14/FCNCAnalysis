#rundir=$ttH_fakes_DIR/datafiles/tthML/v2
rundir=$ttH_fakes_DIR/datafiles/tthML/v5
mkdir -p $rundir/run
rm $rundir/run/*
allsamplefile=$rundir/run/allsamples.dat
sysallsamplefile=$rundir/run/sys_allsamples.dat
#inputdir=/global/projecta/projectdirs/atlas/weiming/testareaSL5/AxAODsData/tthAnaTop/Hist/25ns_R21SkimttV3
inputdir=/global/projecta/projectdirs/atlas/weiming/testareaSL5/AxAODsData/tthAnaTop/Hist/25ns_R21SkimttV5
#for files in `ls $inputdir/*.list`
#do
#	if [ `grep -c "$files" $rundir/ignore.list` -ne '0' ] ; then
#		continue;
#	fi
#	cat $files | sort >> $allsamplefile
#	echo >> $allsamplefile
#done
#for files in `ls $inputdir/*.list`
#do
#	cat $files | sort >> $sysallsamplefile
#	echo >> $sysallsamplefile
#done
ls $inputdir/*.root | grep -v p4135 | tee $allsamplefile $sysallsamplefile > /dev/null

Order $allsamplefile
Order $sysallsamplefile
RemoveReplicateLines $allsamplefile
RemoveReplicateLines $sysallsamplefile
#sed -i "s#../..#/global/projecta/projectdirs/atlas/weiming/testareaSL5/AxAODsData/tthAnaTop#" $allsamplefile
#sed -i "s#../..#/global/projecta/projectdirs/atlas/weiming/testareaSL5/AxAODsData/tthAnaTop#" $sysallsamplefile
#for samplefiles in `find "$rundir/" -name *.txt`
for samplefiles in `find $rundir/*.txt`
do
	for lines in `cat $samplefiles`
	do
		nfilea=0
		nfiled=0
		nfilee=0
		alldsidfiles=`grep $lines $allsamplefile`
		haveFS=0
		for files in $alldsidfiles
		do
			if [[ $files =~ "FS" ]] ; then
				haveFS=1
				break;
			fi
		done
		for files in $alldsidfiles
		do
			if (( haveFS == 1 )) && [[ $files =~ "AF" ]] ; then
				continue;
			fi
			if [[ $files =~ "mc16a" ]] ; then
				if (( nfilea == 0 )) ; then
					tmp=${files/_part*/.root}
					echo $lines" "${tmp/MytthAnaSkim/MysumWeights} >> $rundir/run/weightsum_mc16a_`echo $samplefiles | awk -F "/" '{print $NF}'`
				fi
				(( nfilea ++ ))
				echo $lines" "$files >> $rundir/run/mc16a_`echo $samplefiles | awk -F "/" '{print $NF}'`
			fi
			if [[ $files =~ "mc16d" ]] ; then
				if (( nfiled == 0 )) ; then
					tmp=${files/_part*/.root}
					echo $lines" "${tmp/MytthAnaSkim/MysumWeights} >> $rundir/run/weightsum_mc16d_`echo $samplefiles | awk -F "/" '{print $NF}'`
				fi
				(( nfiled ++ ))
				echo $lines" "$files >> $rundir/run/mc16d_`echo $samplefiles | awk -F "/" '{print $NF}'`
			fi
			if [[ $files =~ "mc16e" ]] ; then
				if (( nfilee == 0 )) ; then
					tmp=${files/_part*/.root}
					echo $lines" "${tmp/MytthAnaSkim/MysumWeights} >> $rundir/run/weightsum_mc16e_`echo $samplefiles | awk -F "/" '{print $NF}'`
				fi
				(( nfilee ++ ))
				echo $lines" "$files >> $rundir/run/mc16e_`echo $samplefiles | awk -F "/" '{print $NF}'`
			fi
		done
		for files in `grep $lines $sysallsamplefile`
		do
			if [[ $files =~ "mc16a" ]] ; then
				echo $lines" "$files >> $rundir/run/sys_mc16a_`echo $samplefiles | awk -F "/" '{print $NF}'`
			fi
			if [[ $files =~ "mc16d" ]] ; then
				echo $lines" "$files >> $rundir/run/sys_mc16d_`echo $samplefiles | awk -F "/" '{print $NF}'`
			fi
			if [[ $files =~ "mc16e" ]] ; then
				echo $lines" "$files >> $rundir/run/sys_mc16e_`echo $samplefiles | awk -F "/" '{print $NF}'`
			fi
		done
	done
done
for files in `grep data $allsamplefile`
do
	if [[ $files =~ "data15" ]] || [[ $files =~ "data16" ]] ; then
		echo $files >> $rundir/run/data1516.txt
	fi
	if [[ $files =~ "data17" ]] ; then
		echo $files >> $rundir/run/data17.txt
	fi
	if [[ $files =~ "data18" ]] ; then
		echo $files >> $rundir/run/data18.txt
	fi
done


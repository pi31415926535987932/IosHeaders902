/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:49 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CoreRCXPCServiceIR
@required
-(void)addDeviceOnBusAsync:(id)arg1 withType:(unsigned)arg2 matching:(id)arg3 reply:(/*^block*/id)arg4;
-(void)addDeviceOnBusAsync:(id)arg1 withType:(unsigned)arg2 matching:(id)arg3 withSessionOwningDevice:(id)arg4 reply:(/*^block*/id)arg5;
-(void)deleteDeviceAsync:(id)arg1 fromBus:(id)arg2 reply:(/*^block*/id)arg3;
-(void)setOSDNameAsync:(id)arg1 forDevice:(id)arg2 reply:(/*^block*/id)arg3;
-(void)startLearningSessionWithDeviceAsync:(id)arg1 forReason:(id)arg2 reply:(/*^block*/id)arg3;
-(void)updateMappingWithSessionOwningDeviceAsync:(id)arg1 forTargetDevice:(id)arg2 reply:(/*^block*/id)arg3;
-(void)sendCommandAsync:(id)arg1 fromDevice:(id)arg2 reply:(/*^block*/id)arg3;
-(void)clearAllStoredCommandsFromDeviceAsync:(id)arg1 reply:(/*^block*/id)arg2;
-(void)setCommandAsync:(unsigned)arg1 target:(id)arg2 source:(id)arg3 forButtonCombination:(id)arg4 delay:(double)arg5 reply:(/*^block*/id)arg6;
-(void)changeButtonCombinationAsync:(id)arg1 delay:(double)arg2 enabled:(char)arg3 forDevice:(id)arg4 reply:(/*^block*/id)arg5;
-(void)startLearningCommandAsync:(unsigned)arg1 withDevice:(id)arg2 reply:(/*^block*/id)arg3;
-(void)endLearningWithDeviceAsync:(id)arg1 reply:(/*^block*/id)arg2;

@end


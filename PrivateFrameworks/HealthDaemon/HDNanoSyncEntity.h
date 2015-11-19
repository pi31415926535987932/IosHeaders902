/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:37 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol HDNanoSyncEntity
@optional
+(long long)finalAnchorForNanoSyncRestoreWithStore:(id)arg1 nowDate:(id)arg2 healthDaemon:(id)arg3 error:(id*)arg4;
+(id)objectsForNanoSyncRestoreWithStore:(id)arg1 nowDate:(id)arg2 syncAnchorRange:(HDSyncAnchorRange)arg3 lastSyncAnchor:(long long*)arg4 healthDaemon:(id)arg5 error:(id*)arg6;
+(unsigned)syncObjectLimitForNanoSyncMessage;

@required
+(int)nanoSyncObjectType;

@end


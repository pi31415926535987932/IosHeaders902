/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:46 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PSYProgressClient <NSObject>
@required
-(oneway void)scheduledActivityChanged:(id)arg1 fromActivity:(id)arg2 error:(id)arg3;
-(oneway void)scheduledActivityProgressChanged:(float)arg1 totalProgress:(float)arg2;
-(oneway void)scheduledActivitiesDidComplete;
-(oneway void)scheduledActivitiesProgressStateChanged:(int)arg1;
-(oneway void)noteClientNotEntitled:(id)arg1;

@end


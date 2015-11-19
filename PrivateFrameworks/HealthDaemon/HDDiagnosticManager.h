/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:38 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSHashTable;

@interface HDDiagnosticManager : NSObject {

	NSHashTable* _objects;
	int _lock;

}
+(id)sharedDiagnosticManager;
-(void)removeObject:(id)arg1 ;
-(id)init;
-(void)addObject:(id)arg1 ;
-(void)logAllDiagnostics;
-(id)_diagnosticsForKey:(id)arg1 shouldLog:(char)arg2 ;
-(id)_diagnosticsOverview;
-(id)diagnosticsForKey:(id)arg1 ;
@end


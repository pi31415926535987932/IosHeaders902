/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:16 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <backupd/MBCKEngine.h>

@protocol OS_dispatch_group;
@class NSString, MBCKRestoreEngine, NSObject, NSDate, MBDomain;

@interface MBCKRestoreDomainEngine : MBCKEngine {

	char _restoreToSafeHarbor;
	char _isAppDomain;
	char _isAppPlaceholderDomain;
	char _isAppPluginDomain;
	char _isGroupDomain;
	unsigned _restoreState;
	NSString* _domainName;
	MBCKRestoreEngine* _parentEngine;
	NSObject*<OS_dispatch_group> _stateTransitionGroup;
	NSDate* _startDate;
	MBDomain* _domain;

}

@property (assign,nonatomic) unsigned restoreState;                                          //@synthesize restoreState=_restoreState - In the implementation block
@property (nonatomic,retain) NSString * domainName;                                          //@synthesize domainName=_domainName - In the implementation block
@property (assign,nonatomic) char restoreToSafeHarbor;                                       //@synthesize restoreToSafeHarbor=_restoreToSafeHarbor - In the implementation block
@property (assign,nonatomic,__weak) MBCKRestoreEngine * parentEngine;                        //@synthesize parentEngine=_parentEngine - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> stateTransitionGroup;              //@synthesize stateTransitionGroup=_stateTransitionGroup - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                                             //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) MBDomain * domain;                                              //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) char isAppDomain;                                               //@synthesize isAppDomain=_isAppDomain - In the implementation block
@property (assign,nonatomic) char isAppPlaceholderDomain;                                    //@synthesize isAppPlaceholderDomain=_isAppPlaceholderDomain - In the implementation block
@property (assign,nonatomic) char isAppPluginDomain;                                         //@synthesize isAppPluginDomain=_isAppPluginDomain - In the implementation block
@property (assign,nonatomic) char isGroupDomain;                                             //@synthesize isGroupDomain=_isGroupDomain - In the implementation block
-(char)cleanupAfterError:(id)arg1 withError:(id*)arg2 ;
-(char)setupWithError:(id*)arg1 ;
-(id)initWithRestoreEngine:(id)arg1 domain:(id)arg2 ;
-(char)runWithError:(id*)arg1 ;
-(void)testStateTransition;
-(void)setParentEngine:(MBCKRestoreEngine *)arg1 ;
-(MBCKRestoreEngine *)parentEngine;
-(void)setIsAppDomain:(char)arg1 ;
-(void)setIsAppPlaceholderDomain:(char)arg1 ;
-(void)setIsAppPluginDomain:(char)arg1 ;
-(void)setIsGroupDomain:(char)arg1 ;
-(char)restoreFilesWithError:(id*)arg1 ;
-(char)finalizeRestoredDomainWithError:(id*)arg1 ;
-(void)setRestoreToSafeHarbor:(char)arg1 ;
-(char)restoreToSafeHarbor;
-(char)isAppPlaceholderDomain;
-(char)isAppPluginDomain;
-(char)isGroupDomain;
-(void)setDomain:(MBDomain *)arg1 ;
-(NSDate *)startDate;
-(void)cancel;
-(MBDomain *)domain;
-(id)mode;
-(void)makeStateTransition;
-(NSObject*<OS_dispatch_group>)stateTransitionGroup;
-(void)setStateTransitionGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(char)isMigrate;
-(NSString *)domainName;
-(void)setDomainName:(NSString *)arg1 ;
-(char)isAppDomain;
-(int)engineMode;
-(int)restoreType;
-(void)setRestoreState:(unsigned)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(unsigned)restoreState;
@end


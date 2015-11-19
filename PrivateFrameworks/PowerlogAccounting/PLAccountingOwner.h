/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:02 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/PLAccountingDependencyOwner.h>

@protocol PLAccountingOwnerManager;
@class NSNumber, PLAccountingRange, NSDate, NSMutableSet, NSMutableDictionary, NSString;

@interface PLAccountingOwner : NSObject <PLAccountingDependencyOwner> {

	id<PLAccountingOwnerManager> _manager;
	NSNumber* _ID;
	PLAccountingRange* _range;
	NSDate* _activationDate;
	NSDate* _runDate;
	NSMutableSet* _observingDependencyIDs;
	NSMutableDictionary* _dependencyIDToDependenciesInRange;

}

@property (__weak) id<PLAccountingOwnerManager> manager;                                           //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain) NSNumber * ID;                                                        //@synthesize ID=_ID - In the implementation block
@property (nonatomic,retain) PLAccountingRange * range;                                            //@synthesize range=_range - In the implementation block
@property (nonatomic,retain) NSDate * activationDate;                                              //@synthesize activationDate=_activationDate - In the implementation block
@property (nonatomic,retain) NSDate * runDate;                                                     //@synthesize runDate=_runDate - In the implementation block
@property (nonatomic,retain) NSMutableSet * observingDependencyIDs;                                //@synthesize observingDependencyIDs=_observingDependencyIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * dependencyIDToDependenciesInRange;              //@synthesize dependencyIDToDependenciesInRange=_dependencyIDToDependenciesInRange - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setManager:(id<PLAccountingOwnerManager>)arg1 ;
-(id<PLAccountingOwnerManager>)manager;
-(NSString *)description;
-(void)deactivate;
-(void)activate;
-(void)run;
-(PLAccountingRange *)range;
-(void)setRange:(PLAccountingRange *)arg1 ;
-(NSNumber *)ID;
-(void)setID:(NSNumber *)arg1 ;
-(void)addDependency:(id)arg1 ;
-(NSDate *)activationDate;
-(void)setActivationDate:(NSDate *)arg1 ;
-(NSMutableDictionary *)dependencyIDToDependenciesInRange;
-(NSDate *)runDate;
-(void)setRunDate:(NSDate *)arg1 ;
-(void)setObservingDependencyIDs:(NSMutableSet *)arg1 ;
-(NSMutableSet *)observingDependencyIDs;
-(void)allRun;
-(char)hasRun;
-(void)setDependencyIDToDependenciesInRange:(NSMutableDictionary *)arg1 ;
-(void)didReceiveDependency:(id)arg1 ;
@end


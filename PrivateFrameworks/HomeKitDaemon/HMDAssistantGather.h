/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:44 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class HMDHomeManager, NSArray, NSString;

@interface HMDAssistantGather : NSObject {

	HMDHomeManager* _manager;
	NSArray* _currentHomekitObjects;

}

@property (nonatomic,readonly) NSArray * homeKitObjects; 
@property (nonatomic,readonly) int homeCount; 
@property (nonatomic,readonly) NSString * primaryHomeName; 
@property (nonatomic,readonly) NSString * primaryHomeID; 
@property (assign,nonatomic,__weak) HMDHomeManager * manager;              //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain) NSArray * currentHomekitObjects;              //@synthesize currentHomekitObjects=_currentHomekitObjects - In the implementation block
-(void)setManager:(HMDHomeManager *)arg1 ;
-(HMDHomeManager *)manager;
-(NSArray *)homeKitObjects;
-(NSString *)primaryHomeName;
-(NSString *)primaryHomeID;
-(int)homeCount;
-(void)_setAssistantTeamIdentifier;
-(id)_getPrimaryHome;
-(void)_gatherHomeKitObjects;
-(void)addToList:(id)arg1 objectReference:(id)arg2 name:(id)arg3 type:(id)arg4 home:(id)arg5 andIdentifer:(id)arg6 ;
-(void)addToList:(id)arg1 service:(id)arg2 ;
-(void)addToList:(id)arg1 room:(id)arg2 ;
-(void)setCurrentHomekitObjects:(NSArray *)arg1 ;
-(NSArray *)currentHomekitObjects;
-(id)initWithHomeManager:(id)arg1 ;
-(void)gatherHomeKitObjects;
@end


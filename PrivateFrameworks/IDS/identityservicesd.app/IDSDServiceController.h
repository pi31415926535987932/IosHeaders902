/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:50 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSSet, NSArray;

@interface IDSDServiceController : NSObject {

	NSMutableDictionary* _services;
	NSMutableDictionary* _servicesToNameMap;
	NSMutableDictionary* _servicesToTopicMap;
	NSMutableDictionary* _servicesToSubServicesMap;
	NSSet* _allAdHocServices;

}

@property (nonatomic,readonly) NSArray * allServices; 
@property (nonatomic,readonly) NSArray * allServicesStrings; 
@property (nonatomic,retain,readonly) NSSet * allAdHocServices;                //@synthesize allAdHocServices=_allAdHocServices - In the implementation block
@property (nonatomic,retain,readonly) NSSet * allPrimaryServices; 
+(id)sharedInstance;
-(id)serviceWithIdentifier:(id)arg1 ;
-(id)serviceWithPushTopic:(id)arg1 ;
-(NSArray *)allServicesStrings;
-(NSSet *)allPrimaryServices;
-(id)allServicesWithAdHocServiceType:(unsigned)arg1 ;
-(void)_loadServices;
-(void)_loadSubServices;
-(void)_loadServiceWithDictionary:(id)arg1 ;
-(void)_saveSubServices;
-(void)_unloadServiceWithName:(id)arg1 ;
-(void)_loadSubServiceWithName:(id)arg1 usingService:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(NSSet *)allAdHocServices;
-(void)dealloc;
-(id)init;
-(void)updateSubServices:(id)arg1 forService:(id)arg2 ;
-(NSArray *)allServices;
-(id)serviceWithName:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:23 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class SAPersonAttribute, NSString, SALocation;

@interface SAFmfGeoFence : SADomainObject

@property (nonatomic,retain) SAPersonAttribute * friend; 
@property (nonatomic,copy) NSString * geoFenceTrigger; 
@property (nonatomic,retain) SALocation * location; 
+(id)geoFence;
+(id)geoFenceWithDictionary:(id)arg1 context:(id)arg2 ;
-(SALocation *)location;
-(void)setLocation:(SALocation *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAPersonAttribute *)friend;
-(void)setFriend:(SAPersonAttribute *)arg1 ;
-(NSString *)geoFenceTrigger;
-(void)setGeoFenceTrigger:(NSString *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:22 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSURL, NSArray, SALocation, NSString;

@interface SAFmfSearch : SABaseClientBoundCommand {

	NSURL* _targetAppId;
	NSArray* _emailAddresses;

}

@property (nonatomic,copy) NSURL * targetAppId;                           //@synthesize targetAppId=_targetAppId - In the implementation block
@property (nonatomic,retain) SALocation * currentLocation; 
@property (nonatomic,copy) NSArray * emailAddresses;                      //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (nonatomic,copy) NSArray * friends; 
@property (nonatomic,copy) NSString * proximity; 
@property (nonatomic,retain) SALocation * requestedLocation; 
+(id)search;
+(id)searchWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)emailAddresses;
-(void)setEmailAddresses:(NSArray *)arg1 ;
-(SALocation *)currentLocation;
-(void)setCurrentLocation:(SALocation *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(char)requiresResponse;
-(NSURL *)targetAppId;
-(void)setTargetAppId:(NSURL *)arg1 ;
-(NSString *)proximity;
-(void)setProximity:(NSString *)arg1 ;
-(void)setFriends:(NSArray *)arg1 ;
-(SALocation *)requestedLocation;
-(void)setRequestedLocation:(SALocation *)arg1 ;
-(NSArray *)friends;
@end


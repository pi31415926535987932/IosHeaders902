/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:23 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString, NSURL, NSNumber;

@interface SAMicroblogTwitterPostAuthor : SADomainObject

@property (assign,nonatomic) int followersCount; 
@property (nonatomic,copy) NSString * fullName; 
@property (nonatomic,copy) NSURL * profileImageUrl; 
@property (nonatomic,copy) NSString * screenName; 
@property (nonatomic,copy) NSNumber * userId; 
@property (assign,nonatomic) char verified; 
+(id)twitterPostAuthor;
+(id)twitterPostAuthorWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setUserId:(NSNumber *)arg1 ;
-(NSNumber *)userId;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)fullName;
-(void)setFullName:(NSString *)arg1 ;
-(int)followersCount;
-(void)setFollowersCount:(int)arg1 ;
-(NSURL *)profileImageUrl;
-(void)setProfileImageUrl:(NSURL *)arg1 ;
-(NSString *)screenName;
-(void)setScreenName:(NSString *)arg1 ;
-(char)verified;
-(void)setVerified:(char)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:07 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FamilyCircle/FAFamilyCircleRequest.h>

@class NSData;

@interface FARegisterPushTokenRequest : FAFamilyCircleRequest {

	NSData* _pushToken;

}

@property (copy,readonly) NSData * pushToken;              //@synthesize pushToken=_pushToken - In the implementation block
-(NSData *)pushToken;
-(id)initWithPushToken:(id)arg1 ;
-(void)startRequestWithCompletionHandler:(/*^block*/id)arg1 ;
@end


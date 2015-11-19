/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:22 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAAceClientState.h>

@class NSArray;

@interface SALCMTvSubscriptionsClientState : SAAceClientState

@property (nonatomic,copy) NSArray * subscriptions; 
+(id)deliveryDeadline;
+(id)persistencePolicy;
+(id)syncKey;
+(id)uniqueObjectIdentifier;
+(id)tvSubscriptionsClientState;
+(id)tvSubscriptionsClientStateWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)subscriptions;
-(void)setSubscriptions:(NSArray *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
@end


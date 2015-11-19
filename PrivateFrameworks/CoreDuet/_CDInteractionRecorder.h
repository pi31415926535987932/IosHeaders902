/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:44 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/_CDInteractionDeleting.h>
#import <libobjc.A.dylib/_CDInteractionQuerying.h>
#import <libobjc.A.dylib/_CDInteractionRecording.h>

@class NSXPCConnection, _CDInteractionPolicies;

@interface _CDInteractionRecorder : NSObject <_CDInteractionDeleting, _CDInteractionQuerying, _CDInteractionRecording> {

	NSXPCConnection* _connection;
	_CDInteractionPolicies* _policies;
	char _enforceDataLimits;
	char _enforcePrivacy;

}

@property (assign) char enforceDataLimits;              //@synthesize enforceDataLimits=_enforceDataLimits - In the implementation block
@property (assign) char enforcePrivacy;                 //@synthesize enforcePrivacy=_enforcePrivacy - In the implementation block
+(id)interactionRecorder;
-(id)initWithServiceName:(id)arg1 ;
-(unsigned)countInteractionsUsingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned)arg3 error:(id*)arg4 ;
-(char)recordInteractions:(id)arg1 ;
-(unsigned)countContactsUsingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned)arg3 ;
-(id)queryContactsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned)arg3 error:(id*)arg4 ;
-(unsigned)deleteInteractionsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned)arg3 error:(id*)arg4 ;
-(unsigned)deleteInteractionsWithBundleId:(id)arg1 error:(id*)arg2 ;
-(unsigned)deleteInteractionsWithBundleId:(id)arg1 account:(id)arg2 error:(id*)arg3 ;
-(unsigned)deleteInteractionsWithBundleId:(id)arg1 domainIdentifier:(id)arg2 error:(id*)arg3 ;
-(char)recordInteraction:(id)arg1 ;
-(void)recordInteractions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)countInteractionsUsingPredicate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)queryContactsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)countContactsUsingPredicate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteInteractionsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)deleteInteractionsWithBundleId:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteInteractionsWithBundleId:(id)arg1 account:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)deleteInteractionsWithBundleId:(id)arg1 domainIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(char)enforceDataLimits;
-(char)enforcePrivacy;
-(void)setEnforceDataLimits:(char)arg1 ;
-(void)setEnforcePrivacy:(char)arg1 ;
@end

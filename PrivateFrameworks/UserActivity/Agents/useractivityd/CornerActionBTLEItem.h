/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:18 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <useractivityd/UACornerActionItem.h>

@class SFActivityScanner, UACornerActionManager, NSData, NSDate, NSMutableSet, NSString;

@interface CornerActionBTLEItem : UACornerActionItem {

	SFActivityScanner* _scanner;
	UACornerActionManager* _manager;
	NSData* _advertisementPayload;
	NSDate* _currentUntilDate;
	NSMutableSet* _payloadRequestedCompletions;
	NSString* _dynamicIdentifier;
	unsigned long _optionBits;
	double _payloadAvailabilityDelay;

}

@property (copy,readonly) SFActivityScanner * scanner;                      //@synthesize scanner=_scanner - In the implementation block
@property (copy,readonly) UACornerActionManager * manager;                  //@synthesize manager=_manager - In the implementation block
@property (copy,readonly) NSData * BTLEPayloadData; 
@property (copy) NSData * advertisementPayload;                             //@synthesize advertisementPayload=_advertisementPayload - In the implementation block
@property (assign) unsigned long optionBits;                                //@synthesize optionBits=_optionBits - In the implementation block
@property (copy) NSDate * currentUntilDate;                                 //@synthesize currentUntilDate=_currentUntilDate - In the implementation block
@property (assign) double payloadAvailabilityDelay;                         //@synthesize payloadAvailabilityDelay=_payloadAvailabilityDelay - In the implementation block
@property (retain) NSMutableSet * payloadRequestedCompletions;              //@synthesize payloadRequestedCompletions=_payloadRequestedCompletions - In the implementation block
+(id)cornerActionBTLEItemWithSFAdvertisement:(id)arg1 optionBits:(unsigned long)arg2 scanner:(id)arg3 manager:(id)arg4 ;
+(char)applicationProxyWillLaunchWithSupportedArchitecture:(id)arg1 ;
+(id)applicationProxyForWebBrowserSupportingContinuation;
+(double)currentAbsoluteTime;
+(char)applicationProxyCanHandleWebBrowserContinuation:(id)arg1 ;
+(id)statusString;
-(unsigned long)optionBits;
-(char)updateFromSFAdvertisement:(id)arg1 ;
-(void)requestPayloadWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithSFAdvertisement:(id)arg1 optionBits:(unsigned long)arg2 type:(unsigned)arg3 activityType:(id)arg4 bundleIdentifier:(id)arg5 teamIDs:(id)arg6 advertisingOptions:(id)arg7 scanner:(id)arg8 manager:(id)arg9 dynamicIdentifier:(id)arg10 ;
-(id)initWithSFAdvertisement:(id)arg1 optionBits:(unsigned long)arg2 type:(unsigned)arg3 activityType:(id)arg4 bundleIdentifier:(id)arg5 teamIDs:(id)arg6 advertisingOptions:(id)arg7 scanner:(id)arg8 manager:(id)arg9 ;
-(void)setCurrentUntilDate:(NSDate *)arg1 ;
-(NSMutableSet *)payloadRequestedCompletions;
-(void)setPayloadRequestedCompletions:(NSMutableSet *)arg1 ;
-(void)clearPayload;
-(NSDate *)currentUntilDate;
-(double)payloadAvailabilityDelay;
-(void)setPayloadAvailabilityDelay:(double)arg1 ;
-(void)setOptionBits:(unsigned long)arg1 ;
-(UACornerActionManager *)manager;
-(SFActivityScanner *)scanner;
-(id)dynamicIdentifier;
-(void)setDynamicIdentifier:(id)arg1 ;
-(id)when;
-(void)setWhen:(id)arg1 ;
-(id)statusString;
-(NSData *)advertisementPayload;
-(void)setAdvertisementPayload:(NSData *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:48 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSMutableDictionary, NSArray, NSDictionary;

@interface PKPaymentOverlayableRequest : PKPaymentWebServiceRequest {

	NSMutableDictionary* _overlayParameters;
	NSMutableDictionary* _secureOverlayParameters;
	NSArray* _overridenKeys;

}

@property (nonatomic,copy) NSDictionary * overlayParameters; 
@property (nonatomic,copy) NSDictionary * secureOverlayParameters; 
-(void)setOverlayParameters:(NSDictionary *)arg1 ;
-(void)setSecureOverlayParameters:(NSDictionary *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setOverlayValue:(id)arg1 forKey:(id)arg2 ;
-(id)overlayValueForKey:(id)arg1 ;
-(NSDictionary *)overlayParameters;
-(void)setSecureOverlayValue:(id)arg1 forKey:(id)arg2 ;
-(id)secureOverlayValueForKey:(id)arg1 ;
-(NSDictionary *)secureOverlayParameters;
-(void)_applyOverlayToDictionary:(id)arg1 ;
-(void)_applySecureOverlayToDictionary:(id)arg1 ;
-(void)_setOverriddenKeys:(id)arg1 ;
-(id)_redirectDataWithOverrides:(id)arg1 ;
@end


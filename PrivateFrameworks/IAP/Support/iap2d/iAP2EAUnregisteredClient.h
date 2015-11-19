/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:47 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iap2d/iap2d-Structs.h>
@class NSString;

@interface iAP2EAUnregisteredClient : NSObject {

	int _processId;
	NSString* _bundleId;
	SBSProcessAssertionRef _processAssertion;
	long _processAssertionStartTime;

}

@property (nonatomic,readonly) NSString * bundleId;              //@synthesize bundleId=_bundleId - In the implementation block
-(void)takeProcessAssertion:(id)arg1 ;
-(int)_getProcessIdForUnregisteredClient;
-(void)dealloc;
-(NSString *)bundleId;
-(id)initWithBundleId:(id)arg1 ;
-(void)releaseProcessAssertion;
@end

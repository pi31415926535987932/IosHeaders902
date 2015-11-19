/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:05 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AuthKit/AuthKit-Structs.h>
#import <libobjc.A.dylib/NSURLSessionAppleIDContext.h>

@class NSString, AKAnisetteProvisioningController, AKAnisetteData;

@interface AKAppleIDSession : NSObject <NSURLSessionAppleIDContext> {

	NSString* _serviceID;
	AKAnisetteProvisioningController* _anisetteController;
	AKAnisetteData* _proxiedAnisetteData;

}

@property (nonatomic,retain) AKAnisetteData * proxiedAnisetteData;              //@synthesize proxiedAnisetteData=_proxiedAnisetteData - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(id)relevantHTTPStatusCodes;
-(void)URLSession:(id)arg1 task:(id)arg2 getAppleIDHeadersForResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)_generateAppleIDHeadersForRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_handleURLResponse:(id)arg1 forRequest:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)_anisetteController;
-(AKAnisetteData *)proxiedAnisetteData;
-(void)setProxiedAnisetteData:(AKAnisetteData *)arg1 ;
-(void)handleResponse:(id)arg1 forRequest:(id)arg2 shouldRetry:(char*)arg3 ;
-(id)appleIDHeadersForRequest:(id)arg1 ;
@end


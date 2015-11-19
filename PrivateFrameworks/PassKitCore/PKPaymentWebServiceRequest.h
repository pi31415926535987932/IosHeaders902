/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:48 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PKPaymentWebServiceTargetDeviceProtocol;
@interface PKPaymentWebServiceRequest : NSObject {

	id<PKPaymentWebServiceTargetDeviceProtocol> _targetDevice;

}

@property (nonatomic,retain) id<PKPaymentWebServiceTargetDeviceProtocol> targetDevice;              //@synthesize targetDevice=_targetDevice - In the implementation block
+(id)authHeaderWithAccount:(id)arg1 ;
+(id)_HTTPBodyWithDictionary:(id)arg1 ;
-(id<PKPaymentWebServiceTargetDeviceProtocol>)targetDevice;
-(void)dealloc;
-(id)_murlRequestWithURL:(id)arg1 ;
-(id)_murlRequestWithURL:(id)arg1 account:(id)arg2 ;
-(id)_murlRequestWithServiceURL:(id)arg1 endpointComponents:(id)arg2 queryParameters:(id)arg3 account:(id)arg4 ;
-(void)setTargetDevice:(id<PKPaymentWebServiceTargetDeviceProtocol>)arg1 ;
@end


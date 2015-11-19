/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:56 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class SKUIClientContext, NSObject, NSString, SKUIRedeemConfiguration;

@interface SKUIRedeemPreflightOperation : NSOperation {

	SKUIClientContext* _clientContext;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	char _loadsRedeemCodeMetadata;
	/*^block*/id _outputBlock;
	NSString* _redeemCode;
	SKUIRedeemConfiguration* _redeemConfiguration;

}

@property (assign) char loadsRedeemCodeMetadata; 
@property (retain) SKUIRedeemConfiguration * redeemConfiguration; 
@property (copy) id outputBlock; 
-(id)init;
-(void)main;
-(void)setOutputBlock:(id)arg1 ;
-(id)outputBlock;
-(id)initWithClientContext:(id)arg1 redeemCode:(id)arg2 ;
-(void)setLoadsRedeemCodeMetadata:(char)arg1 ;
-(void)setRedeemConfiguration:(SKUIRedeemConfiguration *)arg1 ;
-(SKUIRedeemConfiguration *)redeemConfiguration;
-(id)_initSKUIRedeemPreflightOperation;
-(id)_authenticationContext;
-(char)loadsRedeemCodeMetadata;
-(id)_redeemCodeMetadataWithClientContext:(id)arg1 ;
@end


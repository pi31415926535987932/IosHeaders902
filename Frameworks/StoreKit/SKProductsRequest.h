/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:48:09 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKit/SKRequest.h>

@interface SKProductsRequest : SKRequest {

	id _productsRequestInternal;

}

@property (assign,nonatomic) id<SKProductsRequestDelegate> delegate; 
-(void)_handleReply:(id)arg1 ;
-(id)initWithProductIdentifiers:(id)arg1 ;
-(void)_sendXPCMessage;
-(void)dealloc;
-(id)init;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:31 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperationQueue.h>

@class CKDClientProxy;

@interface CKDProxyOperationQueue : NSOperationQueue {

	CKDClientProxy* _proxy;

}

@property (assign,nonatomic,__weak) CKDClientProxy * proxy;              //@synthesize proxy=_proxy - In the implementation block
-(void)addOperation:(id)arg1 ;
-(CKDClientProxy *)proxy;
-(void)setProxy:(CKDClientProxy *)arg1 ;
-(id)initWithProxy:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:57 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CPDistributedMessagingDelayedReplyContext : NSObject {

	unsigned _replyPort;
	char _portPassing;

}

@property (assign,nonatomic) unsigned replyPort;              //@synthesize replyPort=_replyPort - In the implementation block
@property (assign,nonatomic) char portPassing;                //@synthesize portPassing=_portPassing - In the implementation block
-(void)dealloc;
-(unsigned)replyPort;
-(id)initWithReplyPort:(unsigned)arg1 portPassing:(char)arg2 ;
-(void)setReplyPort:(unsigned)arg1 ;
-(char)portPassing;
-(void)setPortPassing:(char)arg1 ;
@end

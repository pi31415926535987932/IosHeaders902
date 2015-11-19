/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:19 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GameKitServices/GameKitServices-Structs.h>
@interface GKAsyncSocket : NSObject

@property (assign,nonatomic) NSObject*<OS_dispatch_queue> targetQueue; 
@property (nonatomic,copy) id receiveDataHandler; 
@property (nonatomic,copy) id connectedHandler; 
@property (nonatomic,retain) id socketName; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)invalidate;
-(void)setReceiveDataHandler:(id)arg1 ;
-(void)sendData:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setConnectedHandler:(id)arg1 ;
-(void)setSocketName:(id)arg1 ;
-(void)tcpConnectSockAddr:(const sockaddr*)arg1 port:(unsigned short)arg2 ;
-(id)socketName;
-(void)tcpAttachSocketDescriptor:(int)arg1 ;
-(id)receiveDataHandler;
-(id)connectedHandler;
-(id)syncQueue;
-(void)setSyncQueue:(id)arg1 ;
-(void)setTargetQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)targetQueue;
@end


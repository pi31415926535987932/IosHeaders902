/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:59 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ImageCapture/ImageCapture-Structs.h>
@interface ICPTPIPBonjourService : NSObject {

	id _bonjourServiceProperties;

}
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(void)addClient:(id)arg1 ;
-(void)removeClient:(id)arg1 ;
-(CFNetServiceRef)publishedService;
-(void)releaseNetService;
-(void)releaseSocket;
-(char)createSocket;
-(char)createAndPublishNetService;
-(id)clientForAddress:(CFDataRef)arg1 ;
-(int)messagePTPDIPInstance:(id)arg1 withSocket:(int)arg2 ;
-(int)createPTPDIPInstanceWithAddress:(CFDataRef)arg1 fileDescriptor:(int)arg2 ;
-(id)clientForPID:(unsigned long)arg1 ;
-(id)initWithHostPort:(unsigned long)arg1 hostName:(id)arg2 hostGUID:(id)arg3 bonjourServiceType:(id)arg4 bonjourTXTRecords:(id)arg5 ;
-(char)startService;
-(void)dispatchConnectionFromSocket:(int)arg1 withAddress:(CFDataRef)arg2 ;
-(int)destroyPTPDIPInstance:(id)arg1 ;
-(int)numClients;
-(void)clientTerminated:(id)arg1 ;
-(void)handleNetServiceError:(SCD_Struct_PT2*)arg1 ;
-(void)unlockDeviceForClient:(id)arg1 ;
-(void)disconnectClient:(id)arg1 ;
@end


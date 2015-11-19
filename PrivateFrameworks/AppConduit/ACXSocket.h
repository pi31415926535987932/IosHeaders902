/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:56 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppConduit.framework/AppConduit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class IDSDeviceConnection, NSObject;

@interface ACXSocket : NSObject {

	char _readSourceIsRunning;
	char _invalidated;
	int _socketFD;
	/*^block*/id _eventHandler;
	IDSDeviceConnection* _deviceConnection;
	NSObject*<OS_dispatch_queue> _socketQueue;
	NSObject*<OS_dispatch_source> _socketReadSource;

}

@property (readonly) int socketFD;                                                //@synthesize socketFD=_socketFD - In the implementation block
@property (readonly) id eventHandler;                                             //@synthesize eventHandler=_eventHandler - In the implementation block
@property (readonly) IDSDeviceConnection * deviceConnection;                      //@synthesize deviceConnection=_deviceConnection - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> socketQueue;                    //@synthesize socketQueue=_socketQueue - In the implementation block
@property (readonly) NSObject*<OS_dispatch_source> socketReadSource;              //@synthesize socketReadSource=_socketReadSource - In the implementation block
@property (assign) char readSourceIsRunning;                                      //@synthesize readSourceIsRunning=_readSourceIsRunning - In the implementation block
@property (assign) char invalidated;                                              //@synthesize invalidated=_invalidated - In the implementation block
-(id)readDataWithError:(id*)arg1 ;
-(id)eventHandler;
-(void)invalidate;
-(void)resumeReadSource;
-(char)writePingWithError:(id*)arg1 ;
-(void)suspendReadSource;
-(char)writeBytes:(const void*)arg1 length:(unsigned long)arg2 error:(id*)arg3 ;
-(char)writeDictionary:(id)arg1 error:(id*)arg2 ;
-(char)writeShutdownMessageWithError:(id*)arg1 ;
-(id)initWithIDSDeviceConnection:(id)arg1 readEventHandler:(/*^block*/id)arg2 ;
-(void)_setUpSocketReadSource;
-(char)readSourceIsRunning;
-(void)setReadSourceIsRunning:(char)arg1 ;
-(NSObject*<OS_dispatch_source>)socketReadSource;
-(int)socketFD;
-(NSObject*<OS_dispatch_queue>)socketQueue;
-(id)readDataOrDictionaryWithError:(id*)arg1 ;
-(IDSDeviceConnection *)deviceConnection;
-(id)initWithSocket:(int)arg1 readEventHandler:(/*^block*/id)arg2 ;
-(id)readDictionaryWithError:(id*)arg1 ;
-(char)invalidated;
-(void)setInvalidated:(char)arg1 ;
-(char)writeData:(id)arg1 error:(id*)arg2 ;
@end


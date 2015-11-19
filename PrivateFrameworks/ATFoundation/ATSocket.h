/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:46 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface ATSocket : NSObject <NSSecureCoding> {

	NSObject*<OS_dispatch_source> _source;
	NSMutableArray* _delegates;
	char _readBuffer[65536];
	char* _writeBuffer;
	unsigned _writeBufferOffset;
	int _socketMode;
	unsigned _suggestedBufferSize;
	int _descriptor;
	NSObject*<OS_dispatch_queue> _queue;
	id _userInfo;
	int _transportUpdgradeExceptionCount;
	unsigned _writeBufferSize;

}

@property (assign,nonatomic) int socketMode;                                     //@synthesize socketMode=_socketMode - In the implementation block
@property (assign,nonatomic) unsigned suggestedBufferSize;                       //@synthesize suggestedBufferSize=_suggestedBufferSize - In the implementation block
@property (assign,nonatomic) int descriptor;                                     //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;               //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) id userInfo;                                        //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,readonly) int transportUpdgradeExceptionCount;              //@synthesize transportUpdgradeExceptionCount=_transportUpdgradeExceptionCount - In the implementation block
@property (assign,nonatomic) unsigned writeBufferSize;                           //@synthesize writeBufferSize=_writeBufferSize - In the implementation block
+(char)supportsSecureCoding;
+(id)createBoundPair:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)flush;
-(void)setUserInfo:(id)arg1 ;
-(id)userInfo;
-(void)close;
-(void)setDescriptor:(int)arg1 ;
-(int)descriptor;
-(int)_send:(const char*)arg1 offset:(unsigned)arg2 len:(unsigned)arg3 error:(id*)arg4 ;
-(unsigned)suggestedBufferSize;
-(void)setSuggestedBufferSize:(unsigned)arg1 ;
-(unsigned)writeBufferSize;
-(void)setWriteBufferSize:(unsigned)arg1 ;
-(void)addTransportUpgradeException;
-(int)transportUpdgradeExceptionCount;
-(void)removeTransportUpgradeException;
-(void)closeDescriptor;
-(int)socketMode;
-(void)notifySocketDidClose;
-(int)send:(const char*)arg1 offset:(unsigned)arg2 len:(unsigned)arg3 error:(id*)arg4 ;
-(void)notifyHasDataAvailable:(const char*)arg1 length:(long)arg2 ;
-(void)writeData:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(int)recv:(char*)arg1 offset:(unsigned)arg2 len:(unsigned)arg3 error:(id*)arg4 ;
-(void)setSocketMode:(int)arg1 ;
-(char)open;
-(char)writeAllData:(id)arg1 error:(id*)arg2 ;
-(char)isOpen;
-(void)removeDelegate:(id)arg1 ;
-(void)addDelegate:(id)arg1 ;
-(id)_flush;
@end


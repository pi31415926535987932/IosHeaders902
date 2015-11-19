/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:39 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <CompanionSync/_SYStreamGuts.h>
#import <libobjc.A.dylib/NSLocking.h>

@interface _SYZlibStreamInternal : _SYStreamGuts <NSLocking> {

	z_stream_s* _zStream;
	unsigned _inputSize;
	unsigned _outputSize;
	char* _input;
	char* _output;
	unsigned _writeOffset;
	unsigned _readOffset;
	int _lock;

}

@property (nonatomic,readonly) int inputRoom; 
@property (nonatomic,readonly) void* inputPtr; 
@property (nonatomic,readonly) int outputAvailable; 
@property (nonatomic,readonly) const void* outputPtr; 
-(void)setInputSize:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(void)lock;
-(void)unlock;
-(int)inputRoom;
-(void*)inputPtr;
-(const void*)outputPtr;
-(void)synchronized:(/*^block*/id)arg1 ;
-(void)setZlibError:(int)arg1 forStream:(id)arg2 ;
-(void)setStatusForStream:(id)arg1 ;
-(int)writeInputFromBuffer:(const void*)arg1 length:(int)arg2 ;
-(int)writeInputFromStream:(id)arg1 ;
-(int)readOutputToBuffer:(void*)arg1 length:(int)arg2 ;
-(int)readOutputToStream:(id)arg1 ;
-(int)outputAvailable;
-(void)setOutputSize:(int)arg1 ;
@end


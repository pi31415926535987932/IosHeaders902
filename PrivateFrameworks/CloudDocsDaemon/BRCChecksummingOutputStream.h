/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:29 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <CoreFoundation/NSOutputStream.h>

@class NSData;

@interface BRCChecksummingOutputStream : NSOutputStream {

	CC_SHA1state_st _ctx;
	unsigned char _sig[21];
	char _isOpen;

}

@property (nonatomic,readonly) NSData * signature; 
+(id)checksummingOutputStreamWithTag:(unsigned char)arg1 ;
-(id)initWithTag:(unsigned char)arg1 ;
-(void)close;
-(NSData *)signature;
-(void)open;
-(char)hasSpaceAvailable;
-(int)write:(const char*)arg1 maxLength:(unsigned)arg2 ;
@end

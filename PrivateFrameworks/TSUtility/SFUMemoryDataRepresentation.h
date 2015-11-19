/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:08 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TSUtility/SFUDataRepresentation.h>

@class NSData;

@interface SFUMemoryDataRepresentation : SFUDataRepresentation {

	NSData* mData;

}
-(void)dealloc;
-(id)data;
-(id)initWithData:(id)arg1 ;
-(unsigned long)readIntoData:(id)arg1 ;
-(id)initWithDataNoCopy:(id)arg1 ;
-(id)inputStream;
-(id)bufferedInputStream;
-(long long)dataLength;
-(id)initWithDataRepresentation:(id)arg1 ;
-(char)isReadable;
-(id)bufferedInputStreamWithBufferSize:(unsigned long)arg1 ;
-(char)hasSameLocationAs:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:00 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MIME/MIME-Structs.h>
#import <CoreFoundation/NSMutableData.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface MFMutableData : NSMutableData <NSCopying, NSMutableCopying> {

	void* _bytes;
	unsigned _length;
	unsigned _mappedLength;
	unsigned _capacity;
	unsigned _threshold;
	char* _path;
	int _fd;
	unsigned _flushFrom;
	char _flush;
	char _immutable;
	char _vm;

}
-(id)initWithContentsOfMappedFile:(id)arg1 ;
-(void)mf_makeImmutable;
-(void)dealloc;
-(id)init;
-(unsigned)length;
-(char)writeToFile:(id)arg1 atomically:(char)arg2 ;
-(id)initWithCapacity:(unsigned)arg1 ;
-(char)writeToURL:(id)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(char)writeToURL:(id)arg1 atomically:(char)arg2 ;
-(const void*)bytes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)appendBytes:(const void*)arg1 length:(unsigned)arg2 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setLength:(unsigned)arg1 ;
-(char)writeToFile:(id)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(id)initWithContentsOfFile:(id)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)appendData:(id)arg1 ;
-(id)initWithBytes:(const void*)arg1 length:(unsigned)arg2 ;
-(void*)mutableBytes;
-(id)initWithContentsOfURL:(id)arg1 ;
-(char)mf_immutable;
-(void)_mapMutableData:(char)arg1 ;
-(void)_flushToDisk:(unsigned)arg1 capacity:(unsigned)arg2 ;
-(id)_initWithFd:(int)arg1 path:(id)arg2 mutable:(char)arg3 ;
-(void)setMappingThreshold:(unsigned)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned)arg2 freeWhenDone:(char)arg3 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned)arg2 ;
-(id)initWithLength:(unsigned)arg1 ;
-(id)subdataWithRange:(NSRange)arg1 ;
@end


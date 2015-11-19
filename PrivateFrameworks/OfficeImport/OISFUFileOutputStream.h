/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:37 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/SFUOutputStream.h>

@class NSString;

@interface OISFUFileOutputStream : NSObject <SFUOutputStream> {

	_sFILE* mFile;
	NSString* mPath;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)path;
-(long long)offset;
-(void)close;
-(id)initWithPath:(id)arg1 ;
-(void)seekToOffset:(long long)arg1 whence:(int)arg2 ;
-(char)canCreateInputStream;
-(char)canSeek;
-(id)closeLocalStream;
-(id)inputStream;
-(void)writeBuffer:(const char*)arg1 size:(unsigned long)arg2 ;
@end


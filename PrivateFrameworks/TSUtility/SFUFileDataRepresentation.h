/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:08 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TSUtility/TSUtility-Structs.h>
#import <TSUtility/SFUDataRepresentation.h>

@protocol SFUInputStream;
@class NSString, SFUCryptoKey;

@interface SFUFileDataRepresentation : SFUDataRepresentation {

	NSString* mPath;
	int mSharedFd;
	long long mFileLength;
	unsigned long mFileType;
	char mHasFileAttributes;
	long long mPlaintextDataLength;
	SFUCryptoKey* mCryptoKey;
	id<SFUInputStream> mInputStream;
	char mDeleteFileWhenDone;

}
-(void)dealloc;
-(id)description;
-(id)path;
-(id)initWithPath:(id)arg1 ;
-(unsigned long)fileType;
-(void)setFileType:(unsigned long)arg1 ;
-(long long)encodedLength;
-(CGDataProviderRef)cgDataProvider;
-(id)initWithPath:(id)arg1 sharedFileDescriptor:(int)arg2 cryptoKey:(id)arg3 dataLength:(long long)arg4 ;
-(id)initWithCopyOfData:(id)arg1 path:(id)arg2 cryptoKey:(id)arg3 ;
-(char)isCryptoKeyIdenticalToKey:(id)arg1 ;
-(id)initWithPath:(id)arg1 cryptoKey:(id)arg2 dataLength:(long long)arg3 ;
-(void)readFileAttributes;
-(id)initWithInputStream:(id)arg1 cryptoKey:(id)arg2 dataLength:(long long)arg3 ;
-(void)deleteFileWhenDone;
-(id)inputStream;
-(long long)dataLength;
-(id)initWithCopyOfData:(id)arg1 path:(id)arg2 ;
-(char)isEncrypted;
-(id)initWithPath:(id)arg1 sharedFileDescriptor:(int)arg2 ;
-(char)isReadable;
-(char)hasSameLocationAs:(id)arg1 ;
@end


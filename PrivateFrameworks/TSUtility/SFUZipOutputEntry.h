/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:08 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface SFUZipOutputEntry : NSObject {

	NSString* name;
	unsigned long utf8NameLength;
	char isCompressed;
	char isEncrypted;
	unsigned time;
	unsigned long long compressedSize;
	unsigned long long uncompressedSize;
	unsigned long long offset;
	unsigned long long compressedDataOffset;
	unsigned crc;
	char isWrittenDirectlyToFile;
	char is64Bit;

}
-(void)dealloc;
-(id)description;
-(int)compareByOffset:(id)arg1 ;
@end

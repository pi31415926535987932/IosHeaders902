/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:08 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SFUBufferedInputStream;
@interface SFUZipRecordInputStream : NSObject {

	id<SFUBufferedInputStream> mInput;
	const char* mBuffer;
	long long mBufferStart;
	long long mBufferEnd;

}
-(void)dealloc;
-(id)initWithDataRepresentation:(id)arg1 ;
-(const char*)dataAtOffset:(long long)arg1 size:(unsigned long)arg2 end:(long long)arg3 ;
@end


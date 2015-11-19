/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:41 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OCBReader.h>

@class NSString;

@interface EBReader : OCBReader {

	NSString* mTemporaryDirectory;
	XlObjectFactory* mXlObjectFactory;
	char mUseStringOptimization;
	char mIsFileStructuredStorage;
	const void* mBuffer;

}

@property (nonatomic,retain) NSString * temporaryDirectory; 
@property (nonatomic,readonly) XlBinaryReader* xlReader; 
@property (assign,nonatomic) char useStringOptimization; 
@property (assign,nonatomic) char isFileStructuredStorage; 
-(void)dealloc;
-(char)start;
-(id)initWithCancelDelegate:(id)arg1 tracing:(id)arg2 ;
-(id)read;
-(void)setIsFileStructuredStorage:(char)arg1 ;
-(char)isFileStructuredStorage;
-(OCCBinaryStreamer*)allocBinaryStreamerWithCryptoKey:(OCCCryptoKeyRef)arg1 baseOutputFilenameInUTF8:(const char*)arg2 ;
-(OCCEncryptionInfoReader*)encryptionInfoReader;
-(XlBinaryReader*)xlReader;
-(NSString *)temporaryDirectory;
-(void)setTemporaryDirectory:(NSString *)arg1 ;
-(char)useStringOptimization;
-(void)setUseStringOptimization:(char)arg1 ;
@end


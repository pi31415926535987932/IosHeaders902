/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:45 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SoftwareBehaviorServices.framework/Support/softwarebehaviorservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <softwarebehaviorservicesd/softwarebehaviorservicesd-Structs.h>
@class NSMutableData, NSMutableArray, NSString, NSData, NSArray;

@interface Archive : NSObject {

	unsigned maxUncompressedSize;
	unsigned uncompressedSize;
	int archiveType;
	NSMutableData* archiveData;
	archiveRef archive;
	NSMutableArray* files;
	NSString* identifier;
	float compressionPercent;

}

@property (nonatomic,readonly) unsigned maxUncompressedSize; 
@property (nonatomic,readonly) unsigned uncompressedSize; 
@property (nonatomic,readonly) NSData * archiveData; 
@property (nonatomic,readonly) NSArray * files; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) float compressionPercent; 
-(id)initWithMaxUncompressedSize:(unsigned)arg1 archiveType:(int)arg2 zipFileName:(const char*)arg3 ;
-(unsigned long long)sizeOnDiskForPath:(id)arg1 ;
-(char)addFile:(id)arg1 asFile:(id)arg2 ;
-(id)initWithArchiveType:(int)arg1 zipFileName:(const char*)arg2 ;
-(id)initWithMaxUncompressedSize:(unsigned)arg1 zipFileName:(const char*)arg2 ;
-(char)addFileURL:(id)arg1 ;
-(unsigned)maxUncompressedSize;
-(unsigned)uncompressedSize;
-(char)addFile:(id)arg1 ;
-(void)dealloc;
-(NSString *)identifier;
-(char)close;
-(NSData *)archiveData;
-(char)writeToFile:(id)arg1 ;
-(NSArray *)files;
-(float)compressionPercent;
@end


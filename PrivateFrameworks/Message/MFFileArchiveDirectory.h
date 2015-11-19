/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:11 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Message/Message-Structs.h>
@class NSMutableDictionary, MFFileArchiveEntry, NSURL, NSData, NSError;

@interface MFFileArchiveDirectory : NSObject {

	NSMutableDictionary* _entries;
	NSMutableDictionary* _scrubbedEntries;
	MFFileArchiveEntry* _mainEntry;
	NSURL* _url;
	NSData* _contents;
	NSError* _error;

}

@property (nonatomic,retain) NSURL * url;                           //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSData * contents;                     //@synthesize contents=_contents - In the implementation block
@property (nonatomic,retain,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
+(NSRange)_rangeOfCentralDirectory:(int)arg1 ;
+(CentralDirectory*)_centralDirectory:(id)arg1 ;
+(id)_entriesFromCentralDictionary:(CentralDirectory*)arg1 inData:(id)arg2 archiveData:(id)arg3 ;
+(CentralHeader*)_centralHeader:(id)arg1 ;
+(NSRange)rangeOfCentralDirectoryInData:(id)arg1 ;
+(char)_hasZipSignature:(id)arg1 ;
+(id)archiveDirectory;
-(char)setArchiveEntry:(id)arg1 ;
-(char)inputWithData:(id)arg1 ;
-(id)mainEntry;
-(NSError *)error;
-(void)dealloc;
-(id)description;
-(NSURL *)url;
-(NSData *)contents;
-(void)setContents:(NSData *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(void)_scrubContentDirectory;
-(id)archiveEntries;
-(char)inputWithURL:(id)arg1 ;
-(void)setMainEntry:(id)arg1 ;
-(id)scrubbedArchiveEntries;
@end


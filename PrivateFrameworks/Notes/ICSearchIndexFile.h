/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:32 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString;


@protocol ICSearchIndexFile
@property (nonatomic,copy,readonly) NSString * name; 
@required
-(NSString *)name;
-(void)close;
-(void)removeDocumentsForIdentifiers:(id)arg1;
-(char)opened;
-(char)createWithURL:(id)arg1;
-(char)openWithURL:(id)arg1 transactionId:(id*)arg2;
-(void)addDocumentWithIdentifier:(id)arg1 content:(id)arg2 transactionId:(id*)arg3;

@end


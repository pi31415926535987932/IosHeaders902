/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:21 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString;


@protocol GSLibraryProtocol
@property (nonatomic,readonly) NSObject*<GSAdditionStoring> storage; 
@property (nonatomic,readonly) NSString * nameSpace; 
@required
-(NSString *)nameSpace;
-(NSObject*<GSAdditionStoring>)storage;
-(char)generationsRemove:(id)arg1 error:(id*)arg2;

@end


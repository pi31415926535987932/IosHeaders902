/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:22 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface ML3MigrationAddedColumn : NSObject {

	NSString* _columnName;
	NSString* _foreignTableName;
	NSString* _foreignColumnName;
	NSString* _joinColumnName;

}

@property (nonatomic,readonly) NSString * columnName;                          //@synthesize columnName=_columnName - In the implementation block
@property (nonatomic,readonly) NSString * foreignTableName;                    //@synthesize foreignTableName=_foreignTableName - In the implementation block
@property (nonatomic,readonly) NSString * foreignColumnName;                   //@synthesize foreignColumnName=_foreignColumnName - In the implementation block
@property (nonatomic,readonly) NSString * joinColumnName;                      //@synthesize joinColumnName=_joinColumnName - In the implementation block
@property (nonatomic,readonly) char shouldImportFromForeignTable; 
-(NSString *)columnName;
-(id)initWithName:(id)arg1 foreignTable:(id)arg2 foreignColumn:(id)arg3 joinColumn:(id)arg4 ;
-(char)shouldImportFromForeignTable;
-(NSString *)joinColumnName;
-(NSString *)foreignTableName;
-(NSString *)foreignColumnName;
@end


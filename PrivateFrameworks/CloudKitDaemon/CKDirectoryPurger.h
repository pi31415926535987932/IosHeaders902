/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:32 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface CKDirectoryPurger : NSObject {

	/*^block*/id _shouldSkipFileBlock;
	/*^block*/id _shouldRemoveFileBlock;
	NSArray* _paths;

}

@property (nonatomic,copy) id shouldSkipFileBlock;                //@synthesize shouldSkipFileBlock=_shouldSkipFileBlock - In the implementation block
@property (nonatomic,copy) id shouldRemoveFileBlock;              //@synthesize shouldRemoveFileBlock=_shouldRemoveFileBlock - In the implementation block
@property (nonatomic,retain) NSArray * paths;                     //@synthesize paths=_paths - In the implementation block
+(void)purgeDirectoryAtPath:(id)arg1 ;
-(void)purge;
-(id)initWithPaths:(id)arg1 ;
-(void)setShouldRemoveFileBlock:(id)arg1 ;
-(NSArray *)paths;
-(id)shouldSkipFileBlock;
-(id)shouldRemoveFileBlock;
-(void)setShouldSkipFileBlock:(id)arg1 ;
-(void)setPaths:(NSArray *)arg1 ;
@end


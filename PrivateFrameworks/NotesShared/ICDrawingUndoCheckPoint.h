/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:34 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <NotesShared/NotesShared-Structs.h>
@class NSOrderedSet, NSUUID, NSString;

@interface ICDrawingUndoCheckPoint : NSObject {

	CGImageRef _image;
	NSOrderedSet* _renderedCommands;
	NSUUID* _uuid;
	NSString* _cacheFilename;
	char _isEraseAllCheckPoint;

}

@property (assign,nonatomic) CGImageRef image;                               //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSString * cacheFilename;                     //@synthesize cacheFilename=_cacheFilename - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * renderedCommands;              //@synthesize renderedCommands=_renderedCommands - In the implementation block
@property (nonatomic,readonly) char isEraseAllCheckPoint;                    //@synthesize isEraseAllCheckPoint=_isEraseAllCheckPoint - In the implementation block
+(unsigned long long)cacheSize;
+(void)deleteAllCacheFiles;
+(id)cacheDirectory;
-(void)setImage:(CGImageRef)arg1 ;
-(void)dealloc;
-(CGImageRef)image;
-(NSUUID *)uuid;
-(id)initWithImage:(CGImageRef)arg1 renderedCommands:(id)arg2 ;
-(NSOrderedSet *)renderedCommands;
-(char)isInMemory;
-(void)writeToDiskAndFreeMemory;
-(void)reloadImage;
-(char)isEraseAllCheckPoint;
-(CGImageRef)retainedImage;
-(NSString *)cacheFilename;
-(char)ensureCacheDirectoryExists;
-(void)flushFromMemoryIfPossible;
@end


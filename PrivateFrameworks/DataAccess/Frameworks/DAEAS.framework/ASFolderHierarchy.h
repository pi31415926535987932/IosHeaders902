/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:58 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ASAccount, NSMutableDictionary;

@interface ASFolderHierarchy : NSObject {

	ASAccount* _account;
	NSMutableDictionary* _folderCache;
	NSMutableDictionary* _folderByIdCache;
	id _delegate;

}
+(void)cleanUpFilesForAccountWithId:(id)arg1 ;
+(id)_dataDirectoryPath;
+(id)_folderCacheFilenameWithId:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)description;
-(id)foldersTag;
-(id)folderIdsThatExternalClientsCareAbout;
-(id)folderIdsThatExternalClientsCareAboutForDataclasses:(int)arg1 ;
-(void)blowAwayFolderCache;
-(id)folderForID:(id)arg1 ;
-(void)clearLocalCache;
-(id)_folderCacheFilename;
-(void)_setFolderByIdCacheFromCurrentCache;
-(void)_setFolderPathsFromCurrentCache;
-(void)_blowAwayFolderCacheWithoutSavingOldFolderPaths;
-(id)folderCache;
-(id)_pathForFolder:(id)arg1 usingCache:(id)arg2 foldersById:(id)arg3 ;
-(void)_setSavedFolderPathsThatExternalClientsCareAbout:(id)arg1 ;
-(void)setFolderIdsThatExternalClientsCareAbout:(id)arg1 ;
-(void)_pruneBadFolderIdsThatExternalClientsCareAbout;
-(void)_setFolderCache:(id)arg1 ;
-(void)_restoreFromSavedFoldersThatExternalClientsCareAbout;
-(id)_savedFolderPathsThatExternalClientsCareAbout;
-(void)_identityMatchAndSetFoldersThatExternalClientsCareAbout:(id)arg1 ;
-(id)_deviceIdInCache;
-(id)foldersUnderFolderWithID:(id)arg1 ;
-(void)setFolderCache:(id)arg1 ;
-(id)folders;
-(id)initWithAccount:(id)arg1 ;
@end


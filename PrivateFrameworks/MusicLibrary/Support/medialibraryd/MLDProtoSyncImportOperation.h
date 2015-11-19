/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:23 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Support/medialibraryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <medialibraryd/medialibraryd-Structs.h>
#import <medialibraryd/MLDImportOperation.h>

@class ML3DatabaseConnection;

@interface MLDProtoSyncImportOperation : MLDImportOperation {

	unsigned _totalSyncPackageCount;
	unsigned _syncPackageNum;
	char _syncSessionStarted;
	int _syncType;
	ML3DatabaseConnection* _connection;
	char _isServerImport;

}
-(unsigned)importSource;
-(char)_performImportWithTransaction:(id)arg1 ;
-(char)_processSyncPackage:(id)arg1 withImportSession:(ML3ImportSession*)arg2 ;
-(char)_processSyncHeader:(id)arg1 ;
-(char)_processSyncError:(id)arg1 ;
-(char)_processSyncOperation:(id)arg1 withImportSession:(ML3ImportSession*)arg2 ;
-(char)_processMediaItemOperation:(id)arg1 withImportSession:(ML3ImportSession*)arg2 ;
-(char)_processPlaylistOperation:(id)arg1 withImportSession:(ML3ImportSession*)arg2 ;
-(void)main;
@end


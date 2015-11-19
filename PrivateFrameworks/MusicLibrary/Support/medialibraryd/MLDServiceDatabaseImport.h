/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:23 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Support/medialibraryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicLibrary/ML3DatabaseImport.h>

@class ML3MusicLibrary, MLDMediaLibraryWriter, MLDClient;

@interface MLDServiceDatabaseImport : ML3DatabaseImport {

	ML3MusicLibrary* _library;
	MLDMediaLibraryWriter* _writer;
	MLDClient* _client;

}

@property (nonatomic,readonly) ML3MusicLibrary * library;                   //@synthesize library=_library - In the implementation block
@property (nonatomic,readonly) MLDMediaLibraryWriter * writer;              //@synthesize writer=_writer - In the implementation block
@property (nonatomic,readonly) MLDClient * client;                          //@synthesize client=_client - In the implementation block
-(id)initWithDatabaseImport:(id)arg1 library:(id)arg2 writer:(id)arg3 client:(id)arg4 ;
-(ML3MusicLibrary *)library;
-(MLDClient *)client;
-(MLDMediaLibraryWriter *)writer;
@end


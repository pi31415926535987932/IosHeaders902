/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:01 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataMigration/DMXPCConnection.h>
#import <libobjc.A.dylib/DMMigratorServiceProtocol.h>

@class NSString;

@interface DMConnection : DMXPCConnection <DMMigratorServiceProtocol> {

	NSString* _lastPlugin;

}

@property (nonatomic,readonly) NSString * lastPlugin;               //@synthesize lastPlugin=_lastPlugin - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleMessage:(id)arg1 ;
-(void)orderedPluginIdentifiersWithCompletion:(/*^block*/id)arg1 ;
-(void)migrateWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)lastPlugin;
-(void)changeVisibility:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)testMigrationUIWithProgress:(char)arg1 forceInvert:(char)arg2 completion:(/*^block*/id)arg3 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:33 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@interface DCManagedStoredLocalMetadata : NSManagedObject
+(id)entityName;
+(id)storedLocalMetadataForDocumentIdentifier:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)saveStoredLocalMetadata:(id)arg1 forDocumentIdentifier:(id)arg2 inManagedObjectContext:(id)arg3 ;
-(id)dictionaryRepresentation;
-(void)updateWithStoredLocalMetadataDictionary:(id)arg1 ;
@end


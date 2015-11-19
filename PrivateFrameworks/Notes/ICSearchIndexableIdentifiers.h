/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:32 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Notes/Notes-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/ICPropertyListSerializable.h>

@class NSOrderedSet;

@interface ICSearchIndexableIdentifiers : NSObject <NSCopying, NSMutableCopying, ICPropertyListSerializable> {

	NSOrderedSet* _identifiers;

}

@property (nonatomic,readonly) NSOrderedSet * identifiers;              //@synthesize identifiers=_identifiers - In the implementation block
@property (nonatomic,readonly) unsigned count; 
-(unsigned)count;
-(id)init;
-(id)description;
-(id)array;
-(id)set;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)orderedSet;
-(NSOrderedSet *)identifiers;
-(id)initWithPropertyListObjectRepresentation:(id)arg1 version:(long long)arg2 ;
-(id)propertyListObjectRepresentation;
-(id)initWithSearchIndexableIdentifier:(id)arg1 ;
-(id)searchIndexableIdentifierAtIndex:(unsigned)arg1 ;
-(id)initForAnyContextWithObjectIdentifiers:(id)arg1 ;
-(id)initWithAssignedOrderedSet:(id)arg1 ;
-(id)initWithOrderedSet:(id)arg1 ;
-(id)objectIdentifiers;
@end


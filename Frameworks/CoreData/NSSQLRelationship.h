/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:45:48 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSSQLProperty.h>

@class NSSQLEntity;

@interface NSSQLRelationship : NSSQLProperty {

	NSSQLEntity* _destinationEntity;
	NSSQLRelationship* _inverse;

}
-(id)destinationEntity;
-(id)correlationTableName;
-(id)foreignKey;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(void)copyValuesForReadOnlyFetch:(id)arg1 ;
-(id)relationshipDescription;
-(void)_setInverseRelationship:(id)arg1 ;
-(id)initForReadOnlyFetchWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(void)_setForeignOrderKey:(id)arg1 ;
-(void)dealloc;
-(id)sourceEntity;
-(char)isOrdered;
-(id)inverseRelationship;
@end


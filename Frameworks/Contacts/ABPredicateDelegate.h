/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:43:36 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ABPredicateDelegate <NSObject>
@optional
-(char)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2 metadata:(id)arg3;
-(char)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2 moreComing:(char)arg3;
-(char)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2 metadata:(id)arg3 moreComing:(char)arg4;

@required
-(char)predicateShouldContinue:(id)arg1;
-(char)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2;

@end


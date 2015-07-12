//
//  FactBook.h
//  FunFacts
//
//  Created by Charles Wesley Cho on 7/12/15.
//  Copyright (c) 2015 Charles Wesley Cho. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FactBook : NSObject
@property (strong, nonatomic) NSArray *facts;

- (NSString *) randomFact;

@end
